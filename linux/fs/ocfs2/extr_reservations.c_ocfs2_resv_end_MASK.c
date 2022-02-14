
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_alloc_reservation {unsigned int r_len; unsigned int r_start; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct ocfs2_alloc_reservation *VAR_0)
{
 if (VAR_0->r_len)
  return VAR_0->r_start + VAR_0->r_len - 1;
 return VAR_0->r_start;
}
