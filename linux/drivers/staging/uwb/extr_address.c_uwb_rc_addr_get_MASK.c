
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uwb_rc_evt_dev_addr_mgmt {int baAddr; } ;
struct uwb_rc {int dummy; } ;
struct uwb_mac_addr {int* data; } ;
struct uwb_dev_addr {int* data; } ;
typedef enum uwb_addr_type { ____Placeholder_uwb_addr_type } uwb_addr_type ;


 int FUNC_0 () ;
 int VAR_0 ;


 int FUNC_1 (int**,int ,int) ;
 int FUNC_2 (struct uwb_rc*,int,int*,struct uwb_rc_evt_dev_addr_mgmt*) ;

__attribute__((used)) static int FUNC_3(struct uwb_rc *VAR_1,
      void *VAR_2, enum uwb_addr_type VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0x0;
 struct uwb_rc_evt_dev_addr_mgmt VAR_6;
 struct uwb_dev_addr *VAR_7 = VAR_2;
 struct uwb_mac_addr *VAR_8 = VAR_2;
 u8 *VAR_9;

 VAR_4 = -VAR_0;
 switch (VAR_3) {
 case 129:
  VAR_9 = VAR_7->data;
  break;
 case 128:
  VAR_5 |= 0x2;
  VAR_9 = VAR_8->data;
  break;
 default:
  return VAR_4;
 }
 VAR_4 = FUNC_2(VAR_1, VAR_5, VAR_9, &VAR_6);
 if (VAR_4 == 0)
  switch (VAR_3) {
  case 129:
   FUNC_1(&VAR_7->data, VAR_6.baAddr,
          sizeof(VAR_7->data));
   break;
  case 128:
   FUNC_1(&VAR_8->data, VAR_6.baAddr,
          sizeof(VAR_8->data));
   break;
  default:
   FUNC_0();
  }
 return VAR_4;
}
