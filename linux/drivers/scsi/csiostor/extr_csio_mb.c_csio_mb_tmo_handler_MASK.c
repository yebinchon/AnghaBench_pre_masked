
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_cmd_hdr {int lo; int hi; } ;
struct csio_mbm {struct csio_mb* mcurrent; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int pfn; struct csio_mbm mbm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct csio_mbm*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct csio_hw*,char*,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;

struct csio_mb *
FUNC_7(struct csio_hw *VAR_2)
{
 struct csio_mbm *VAR_3 = &VAR_2->mbm;
 struct csio_mb *VAR_4 = VAR_3->mcurrent;
 struct fw_cmd_hdr *VAR_5;





 if (VAR_4 == ((void*)0)) {
  FUNC_0(0);
  return ((void*)0);
 }

 VAR_5 = (struct fw_cmd_hdr *)(VAR_4->mb);

 FUNC_4(VAR_2, "Mailbox num:%x op:0x%x timed out\n", VAR_2->pfn,
      FUNC_2(FUNC_6(VAR_5->hi)));

 VAR_3->mcurrent = ((void*)0);
 FUNC_1(VAR_3, VAR_1);
 VAR_5->lo = FUNC_5(FUNC_3(VAR_0));

 return VAR_4;
}
