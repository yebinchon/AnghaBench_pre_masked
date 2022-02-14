
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_iq_cmd {void* fl1id; void* fl0id; void* iqid; void* type_to_iqandstindex; void* alloc_to_len16; void* op_to_vfn; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_iq_params {int fl1id; int fl0id; int iqid; int type; int vfn; int pfn; } ;
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
 void* FUNC_6 (int) ;
 void* FUNC_7 (int ) ;

void
FUNC_8(struct csio_hw *VAR_4, struct csio_mb *VAR_5, void *VAR_6,
  uint32_t VAR_7, struct csio_iq_params *VAR_8,
  void (*VAR_9) (struct csio_hw *, struct csio_mb *))
{
 struct fw_iq_cmd *VAR_10 = (struct fw_iq_cmd *)(VAR_5->mb);

 FUNC_0(VAR_5, VAR_10, VAR_7, VAR_6, VAR_9, 1);

 VAR_10->op_to_vfn = FUNC_6(FUNC_2(VAR_2) |
    VAR_1 | VAR_0 |
    FUNC_3(VAR_8->pfn) |
    FUNC_5(VAR_8->vfn));
 VAR_10->alloc_to_len16 = FUNC_6(VAR_3 |
    FUNC_1(sizeof(*VAR_10) / 16));
 VAR_10->type_to_iqandstindex = FUNC_6(FUNC_4(VAR_8->type));

 VAR_10->iqid = FUNC_7(VAR_8->iqid);
 VAR_10->fl0id = FUNC_7(VAR_8->fl0id);
 VAR_10->fl1id = FUNC_7(VAR_8->fl1id);

}
