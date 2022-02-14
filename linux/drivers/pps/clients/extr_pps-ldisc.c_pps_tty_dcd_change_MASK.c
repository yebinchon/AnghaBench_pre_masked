
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct pps_event_time {int dummy; } ;
struct pps_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct pps_device*,struct pps_event_time*,int ,int *) ;
 int FUNC_3 (struct pps_event_time*) ;
 struct pps_device* FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_3, unsigned int VAR_4)
{
 struct pps_device *VAR_5;
 struct pps_event_time VAR_6;

 FUNC_3(&VAR_6);

 VAR_5 = FUNC_4(VAR_3);




 if (FUNC_0(VAR_5 == ((void*)0)))
  return;


 FUNC_2(VAR_5, &VAR_6, VAR_4 ? VAR_0 :
   VAR_1, ((void*)0));

 FUNC_1(VAR_5->dev, "PPS %s at %lu\n",
   VAR_4 ? "assert" : "clear", VAR_2);
}
