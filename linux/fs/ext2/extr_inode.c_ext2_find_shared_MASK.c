
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef scalar_t__ __le32 ;
struct TYPE_10__ {int i_meta_lock; } ;
struct TYPE_9__ {scalar_t__ b_data; } ;
struct TYPE_8__ {TYPE_6__* bh; scalar_t__* p; int key; } ;
typedef TYPE_1__ Indirect ;


 TYPE_7__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_1__* FUNC_3 (struct inode*,int,int*,TYPE_1__*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static Indirect *FUNC_6(struct inode *VAR_0,
    int VAR_1,
    int VAR_2[4],
    Indirect VAR_3[4],
    __le32 *VAR_4)
{
 Indirect *VAR_5, *VAR_6;
 int VAR_7, VAR_8;

 *VAR_4 = 0;
 for (VAR_7 = VAR_1; VAR_7 > 1 && !VAR_2[VAR_7-1]; VAR_7--)
  ;
 VAR_5 = FUNC_3(VAR_0, VAR_7, VAR_2, VAR_3, &VAR_8);
 if (!VAR_5)
  VAR_5 = VAR_3 + VAR_7-1;




 FUNC_4(&FUNC_0(VAR_0)->i_meta_lock);
 if (!VAR_5->key && *VAR_5->p) {
  FUNC_5(&FUNC_0(VAR_0)->i_meta_lock);
  goto no_top;
 }
 for (VAR_6=VAR_5; VAR_6>VAR_3 && FUNC_1((__le32*)VAR_6->bh->b_data,VAR_6->p); VAR_6--)
  ;






 if (VAR_6 == VAR_3 + VAR_7 - 1 && VAR_6 > VAR_3) {
  VAR_6->p--;
 } else {
  *VAR_4 = *VAR_6->p;
  *VAR_6->p = 0;
 }
 FUNC_5(&FUNC_0(VAR_0)->i_meta_lock);

 while(VAR_5 > VAR_6)
 {
  FUNC_2(VAR_5->bh);
  VAR_5--;
 }
no_top:
 return VAR_5;
}
