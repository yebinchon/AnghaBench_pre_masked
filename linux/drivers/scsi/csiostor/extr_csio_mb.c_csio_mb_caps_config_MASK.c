
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_caps_config_cmd {int fcoecaps; void* cfvalid_to_len16; void* op_to_write; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_mb*,struct fw_caps_config_cmd*,int ,struct csio_hw*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct csio_hw *VAR_7, struct csio_mb *VAR_8, uint32_t VAR_9,
      bool VAR_10, bool VAR_11, bool VAR_12, bool VAR_13,
      void (*VAR_14) (struct csio_hw *, struct csio_mb *))
{
 struct fw_caps_config_cmd *VAR_15 =
    (struct fw_caps_config_cmd *)(VAR_8->mb);

 FUNC_0(VAR_8, VAR_15, VAR_9, VAR_7, VAR_14, VAR_10 ? 0 : 1);

 VAR_15->op_to_write = FUNC_3(FUNC_2(VAR_0) |
      VAR_5 |
      (VAR_10 ? VAR_6 : VAR_4));
 VAR_15->cfvalid_to_len16 = FUNC_3(FUNC_1(sizeof(*VAR_15) / 16));


 if (!VAR_10)
  return;


 VAR_15->fcoecaps = 0;

 if (VAR_13)
  VAR_15->fcoecaps |= FUNC_4(VAR_1);
 if (VAR_11)
  VAR_15->fcoecaps |= FUNC_4(VAR_2);
 if (VAR_12)
  VAR_15->fcoecaps |= FUNC_4(VAR_3);
}
