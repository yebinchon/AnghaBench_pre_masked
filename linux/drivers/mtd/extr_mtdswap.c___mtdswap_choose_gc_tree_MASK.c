
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtdswap_dev {TYPE_2__* trees; } ;
struct TYPE_3__ {int * rb_node; } ;
struct TYPE_4__ {TYPE_1__ root; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mtdswap_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct mtdswap_dev *VAR_5)
{
 int VAR_6, VAR_7;

 if (FUNC_0(VAR_5, VAR_0) < VAR_1)
  VAR_7 = VAR_4;
 else
  VAR_7 = VAR_3;

 for (VAR_6 = VAR_2; VAR_6 >= VAR_7; VAR_6--)
  if (VAR_5->trees[VAR_6].root.rb_node != ((void*)0))
   return VAR_6;

 return -1;
}
