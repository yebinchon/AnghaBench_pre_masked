
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct to_free {unsigned int count; scalar_t__ to; int inode; } ;


 int FUNC_0 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct to_free *VAR_0, u64 VAR_1, unsigned VAR_2)
{
 if (VAR_0->count && VAR_0->to != VAR_1) {
  FUNC_0(VAR_0->inode, VAR_0->to - VAR_0->count, VAR_0->count);
  VAR_0->count = 0;
 }
 VAR_0->count += VAR_2;
 VAR_0->to = VAR_1 + VAR_2;
}
