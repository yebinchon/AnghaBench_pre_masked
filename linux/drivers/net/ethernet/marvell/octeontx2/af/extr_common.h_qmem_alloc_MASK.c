
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qmem {int entry_sz; int qsize; scalar_t__ align; scalar_t__ iova; scalar_t__ base; scalar_t__ alloc_sz; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct qmem* FUNC_1 (struct device*,int,int ) ;
 scalar_t__ FUNC_2 (struct device*,scalar_t__,scalar_t__*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct device *VAR_4, struct qmem **VAR_5,
        int VAR_6, int VAR_7)
{
 struct qmem *VAR_8;
 int VAR_9;

 if (!VAR_6)
  return -VAR_0;

 *VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_8), VAR_2);
 if (!*VAR_5)
  return -VAR_1;
 VAR_8 = *VAR_5;

 VAR_8->entry_sz = VAR_7;
 VAR_8->alloc_sz = (VAR_6 * VAR_7) + VAR_3;
 VAR_8->base = FUNC_2(VAR_4, VAR_8->alloc_sz,
      &VAR_8->iova, VAR_2);
 if (!VAR_8->base)
  return -VAR_1;

 VAR_8->qsize = VAR_6;

 VAR_9 = FUNC_0((u64)VAR_8->iova, VAR_3);
 VAR_8->align = (VAR_9 - VAR_8->iova);
 VAR_8->base += VAR_8->align;
 VAR_8->iova += VAR_8->align;
 return 0;
}
