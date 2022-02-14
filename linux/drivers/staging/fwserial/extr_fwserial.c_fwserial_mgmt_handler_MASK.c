
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwtty_peer {int dummy; } ;
struct fwserial_mgmt_pkt {int dummy; } ;
struct fw_request {int dummy; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct fw_card*) ;
 struct fwtty_peer* FUNC_1 (struct fw_card*,int,int) ;
 int FUNC_2 (struct fw_card*,struct fw_request*,int) ;
 int FUNC_3 (struct fwtty_peer*,struct fwserial_mgmt_pkt*,unsigned long long,size_t) ;
 int FUNC_4 (struct fw_card*,char*,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct fw_card *VAR_2,
      struct fw_request *VAR_3,
      int VAR_4, int VAR_5, int VAR_6,
      int VAR_7,
      unsigned long long VAR_8,
      void *VAR_9, size_t VAR_10,
      void *VAR_11)
{
 struct fwserial_mgmt_pkt *VAR_12 = VAR_9;
 struct fwtty_peer *VAR_13;
 int VAR_14;

 FUNC_5();
 VAR_13 = FUNC_1(VAR_2, VAR_7, VAR_6);
 if (!VAR_13) {
  FUNC_4(VAR_2, "peer(%d:%x) not found\n", VAR_7, VAR_6);
  FUNC_0(VAR_2);
  VAR_14 = VAR_0;

 } else {
  switch (VAR_4) {
  case 128:
   VAR_14 = FUNC_3(VAR_13, VAR_12, VAR_8, VAR_10);
   break;

  default:
   VAR_14 = VAR_1;
  }
 }

 FUNC_6();
 FUNC_2(VAR_2, VAR_3, VAR_14);
}
