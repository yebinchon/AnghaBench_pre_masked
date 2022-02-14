
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_mode; } ;
struct TYPE_3__ {int gfsflag; int fsflag; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline u32 FUNC_2(struct inode *VAR_3, u32 VAR_4)
{
 int VAR_5;
 u32 VAR_6 = 0;

 if (FUNC_1(VAR_3->i_mode))
  VAR_4 &= ~VAR_1;
 else
  VAR_4 &= ~VAR_0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  if (VAR_4 & VAR_2[VAR_5].gfsflag)
   VAR_6 |= VAR_2[VAR_5].fsflag;
 return VAR_6;
}
