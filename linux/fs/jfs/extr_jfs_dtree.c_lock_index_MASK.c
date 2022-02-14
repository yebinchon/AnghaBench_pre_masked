
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tid_t ;
struct tlock {scalar_t__ lock; } ;
struct metapage {int dummy; } ;
struct lv {int offset; int length; } ;
struct linelock {size_t index; size_t maxcnt; struct lv* lv; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct linelock* FUNC_0 (struct linelock*) ;
 struct tlock* FUNC_1 (int ,struct inode*,struct metapage*,int ) ;

__attribute__((used)) static inline void FUNC_2(tid_t VAR_1, struct inode *VAR_2, struct metapage * VAR_3,
         u32 VAR_4)
{
 struct tlock *VAR_5;
 struct linelock *VAR_6;
 struct lv *VAR_7;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0);
 VAR_6 = (struct linelock *) VAR_5->lock;

 if (VAR_6->index >= VAR_6->maxcnt)
  VAR_6 = FUNC_0(VAR_6);
 VAR_7 = &VAR_6->lv[VAR_6->index];





 VAR_7->offset = ((VAR_4 - 2) & 511) >> 1;
 VAR_7->length = 1;
 VAR_6->index++;
}
