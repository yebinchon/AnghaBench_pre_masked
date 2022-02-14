
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {struct buffer_head** mp_bh; } ;
struct buffer_head {scalar_t__ b_size; scalar_t__ b_data; } ;
typedef int __u16 ;
typedef int __be64 ;


 int * FUNC_0 (int,struct metapath*) ;
 scalar_t__ FUNC_1 (struct metapath*,int*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct metapath *VAR_0, int VAR_1,
    __u16 *VAR_2, unsigned int VAR_3,
    __u16 *VAR_4, unsigned int VAR_5,
    __be64 **VAR_6, __be64 **VAR_7)
{
 struct buffer_head *VAR_8 = VAR_0->mp_bh[VAR_1];
 __be64 *VAR_9;

 VAR_9 = FUNC_0(VAR_1, VAR_0);
 *VAR_6 = VAR_9;
 if (FUNC_1(VAR_0, VAR_2, VAR_1)) {
  bool VAR_10 = VAR_1 < VAR_3;
  *VAR_6 = VAR_9 + VAR_2[VAR_1] + VAR_10;
 }
 *VAR_7 = (__be64 *)(VAR_8->b_data + VAR_8->b_size);
 if (VAR_4 && FUNC_1(VAR_0, VAR_4, VAR_1)) {
  bool VAR_11 = VAR_1 < VAR_5;
  *VAR_7 = VAR_9 + VAR_4[VAR_1] + VAR_11;
 }
}
