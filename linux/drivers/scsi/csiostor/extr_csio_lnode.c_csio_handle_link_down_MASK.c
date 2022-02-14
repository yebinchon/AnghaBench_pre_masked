
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct csio_lnode {int fcf_flowid; struct csio_fcf_info* fcfinfo; } ;
struct csio_hw {int fcf_flowid; struct csio_fcf_info* fcfinfo; } ;
struct csio_fcf_info {int portid; } ;


 int FUNC_0 (struct csio_lnode*,int ) ;
 int FUNC_1 (struct csio_lnode*,char*,int ) ;
 int FUNC_2 (struct csio_lnode*) ;
 int FUNC_3 (struct csio_lnode*) ;
 struct csio_lnode* FUNC_4 (struct csio_lnode*,int ) ;
 int FUNC_5 (struct csio_lnode*,char*,int ) ;
 int FUNC_6 (struct csio_lnode*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_7(struct csio_hw *VAR_2, uint8_t VAR_3, uint32_t VAR_4,
        uint32_t VAR_5)
{
 struct csio_fcf_info *VAR_6;
 struct csio_lnode *VAR_7;


 VAR_7 = FUNC_4(VAR_2, VAR_5);
 if (VAR_7) {
  VAR_6 = VAR_7->fcfinfo;
  FUNC_0(VAR_7, VAR_1);


  if (!FUNC_2(VAR_7)) {
   FUNC_5(VAR_7,
    "warn: FCOE link is already in offline "
    "Ignoring Fcoe linkdown event on portid %d\n",
     VAR_3);
   FUNC_0(VAR_7, VAR_0);
   return;
  }


  if (VAR_6->portid != VAR_3) {
   FUNC_5(VAR_7,
    "warn: FCOE linkdown recv with "
    "invalid port %d\n", VAR_3);
   FUNC_0(VAR_7, VAR_0);
   return;
  }


  if (VAR_7->fcf_flowid != VAR_4) {
   FUNC_5(VAR_7,
    "warn: FCOE linkdown recv with "
    "invalid fcfi x%x\n", VAR_4);
   FUNC_0(VAR_7, VAR_0);
   return;
  }

  FUNC_1(VAR_2, "Port:%d - FCOE LINK DOWN\n", VAR_3);


  FUNC_3(VAR_7);

  return;
 } else {
  FUNC_6(VAR_2,
     "warn: FCOE linkdown recv with invalid vnpi x%x\n",
     VAR_5);
  FUNC_0(VAR_2, VAR_0);
 }
}
