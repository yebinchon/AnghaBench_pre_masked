
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rt2x00_dev {int dummy; } ;
struct link_qual {scalar_t__ vgc_level_reg; scalar_t__ vgc_level; } ;


 int FUNC_0 (struct rt2x00_dev*,int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct rt2x00_dev *VAR_0,
         struct link_qual *VAR_1, u8 VAR_2)
{
 if (VAR_1->vgc_level_reg != VAR_2) {
  FUNC_0(VAR_0, 17, VAR_2);
  VAR_1->vgc_level = VAR_2;
  VAR_1->vgc_level_reg = VAR_2;
 }
}
