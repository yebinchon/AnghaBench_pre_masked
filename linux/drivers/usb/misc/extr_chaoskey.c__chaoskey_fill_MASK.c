
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chaoskey {int valid; int used; int reading; int reads_started; int interface; int wait_q; int urb; int present; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct chaoskey *VAR_6)
{
 FUNC_0(VAR_5);
 int VAR_7;
 bool VAR_8;

 FUNC_3(VAR_6->interface, "fill");



 if (VAR_6->valid != VAR_6->used) {
  FUNC_3(VAR_6->interface, "not empty yet (valid %d used %d)",
   VAR_6->valid, VAR_6->used);
  return 0;
 }


 if (!VAR_6->present) {
  FUNC_3(VAR_6->interface, "device not present");
  return -VAR_1;
 }


 VAR_7 = FUNC_1(VAR_6->interface);
 if (VAR_7) {
  FUNC_3(VAR_6->interface, "wakeup failed (result %d)", VAR_7);
  return VAR_7;
 }

 VAR_6->reading = 1;
 VAR_7 = FUNC_4(VAR_6->urb, VAR_3);
 if (VAR_7 < 0) {
  VAR_7 = FUNC_5(VAR_7);
  VAR_6->reading = 0;
  goto out;
 }






 VAR_8 = VAR_6->reads_started;
 VAR_6->reads_started = 1;
 VAR_7 = FUNC_6(
  VAR_6->wait_q,
  !VAR_6->reading,
  (VAR_8 ? VAR_4 : VAR_0) );

 if (VAR_7 < 0)
  goto out;

 if (VAR_7 == 0)
  VAR_7 = -VAR_2;
 else
  VAR_7 = VAR_6->valid;
out:

 FUNC_2(VAR_6->interface);

 FUNC_3(VAR_6->interface, "read %d bytes", VAR_6->valid);

 return VAR_7;
}
