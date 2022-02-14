
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_eq_ofld_cmd {void* alloc_to_len16; void* op_to_vfn; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;
struct csio_eq_params {int vfn; int pfn; } ;


 int FUNC_0 (struct csio_mb*,struct fw_eq_ofld_cmd*,int ,void*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct csio_hw *VAR_4, struct csio_mb *VAR_5, void *VAR_6,
  uint32_t VAR_7, struct csio_eq_params *VAR_8,
  void (*VAR_9) (struct csio_hw *, struct csio_mb *))
{
 struct fw_eq_ofld_cmd *VAR_10 = (struct fw_eq_ofld_cmd *)(VAR_5->mb);

 FUNC_0(VAR_5, VAR_10, VAR_7, VAR_6, VAR_9, 1);
 VAR_10->op_to_vfn = FUNC_5(FUNC_2(VAR_2) |
    VAR_1 | VAR_0 |
    FUNC_3(VAR_8->pfn) |
    FUNC_4(VAR_8->vfn));
 VAR_10->alloc_to_len16 = FUNC_5(VAR_3 |
    FUNC_1(sizeof(*VAR_10) / 16));

}
