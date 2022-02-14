
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_iq_cmd {void* fl0size; void* type_to_iqandstindex; void* alloc_to_len16; void* op_to_vfn; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_iq_params {int fl1size; int fl0size; int iqasynch; int type; int viid; int vfn; int pfn; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_mb*,struct fw_iq_cmd*,int ,void*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct csio_hw *VAR_4, struct csio_mb *VAR_5, void *VAR_6,
   uint32_t VAR_7, struct csio_iq_params *VAR_8,
   void (*VAR_9) (struct csio_hw *, struct csio_mb *))
{
 struct fw_iq_cmd *VAR_10 = (struct fw_iq_cmd *)(VAR_5->mb);

 FUNC_0(VAR_5, VAR_10, VAR_7, VAR_6, VAR_9, 1);

 VAR_10->op_to_vfn = FUNC_8(FUNC_2(VAR_2) |
    VAR_1 | VAR_0 |
    FUNC_4(VAR_8->pfn) |
    FUNC_6(VAR_8->vfn));

 VAR_10->alloc_to_len16 = FUNC_8(VAR_3 |
    FUNC_1(sizeof(*VAR_10) / 16));

 VAR_10->type_to_iqandstindex = FUNC_8(
    FUNC_7(VAR_8->viid) |
    FUNC_5(VAR_8->type) |
    FUNC_3(VAR_8->iqasynch));

 VAR_10->fl0size = FUNC_9(VAR_8->fl0size);
 VAR_10->fl0size = FUNC_9(VAR_8->fl1size);

}
