
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fw_vi_cmd {unsigned int nmac; int type_viid; void* alloc_to_len16; int rsssize_pkd; int nmac0; int nmac1; int nmac2; int nmac3; int mac; int portid_pkd; void* op_to_vfn; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fw_vi_cmd) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (struct fw_vi_cmd*,int ,int) ;
 int FUNC_14 (struct adapter*,unsigned int,struct fw_vi_cmd*,int,struct fw_vi_cmd*) ;

int FUNC_15(struct adapter *VAR_5, unsigned int VAR_6, unsigned int VAR_7,
  unsigned int VAR_8, unsigned int VAR_9, unsigned int VAR_10, u8 *VAR_11,
  unsigned int *VAR_12, u8 *VAR_13, u8 *VAR_14)
{
 int VAR_15;
 struct fw_vi_cmd VAR_16;

 FUNC_13(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.op_to_vfn = FUNC_11(FUNC_0(VAR_3) | VAR_1 |
      VAR_2 | VAR_0 |
      FUNC_2(VAR_8) | FUNC_5(VAR_9));
 VAR_16.alloc_to_len16 = FUNC_11(VAR_4 | FUNC_1(VAR_16));
 VAR_16.portid_pkd = FUNC_3(VAR_7);
 VAR_16.nmac = VAR_10 - 1;

 VAR_15 = FUNC_14(VAR_5, VAR_6, &VAR_16, sizeof(VAR_16), &VAR_16);
 if (VAR_15)
  return VAR_15;

 if (VAR_11) {
  FUNC_12(VAR_11, VAR_16.mac, sizeof(VAR_16.mac));
  switch (VAR_10) {
  case 5:
   FUNC_12(VAR_11 + 24, VAR_16.nmac3, sizeof(VAR_16.nmac3));

  case 4:
   FUNC_12(VAR_11 + 18, VAR_16.nmac2, sizeof(VAR_16.nmac2));

  case 3:
   FUNC_12(VAR_11 + 12, VAR_16.nmac1, sizeof(VAR_16.nmac1));

  case 2:
   FUNC_12(VAR_11 + 6, VAR_16.nmac0, sizeof(VAR_16.nmac0));
  }
 }
 if (VAR_12)
  *VAR_12 = FUNC_4(FUNC_9(VAR_16.rsssize_pkd));

 if (VAR_13)
  *VAR_13 = FUNC_6(FUNC_10(VAR_16.alloc_to_len16));

 if (VAR_14)
  *VAR_14 = FUNC_8(FUNC_10(VAR_16.alloc_to_len16));

 return FUNC_7(FUNC_9(VAR_16.type_viid));
}
