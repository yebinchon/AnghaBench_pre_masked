
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct cp_control {int reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct f2fs_sb_info *VAR_2,
     struct cp_control *VAR_3)
{
 bool VAR_4 = FUNC_0(VAR_2, VAR_0);

 return (VAR_3) ? (VAR_3->reason & VAR_1) && VAR_4 : VAR_4;
}
