
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_decompress_frontend {scalar_t__ headoffset; scalar_t__ backmost; } ;
typedef scalar_t__ erofs_off_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct z_erofs_decompress_frontend *VAR_2,
           unsigned int VAR_3,
           erofs_off_t VAR_4)
{
 if (VAR_3 <= VAR_0)
  return 0;

 if (VAR_2->backmost)
  return 1;

 return VAR_3 >= VAR_1 &&
  VAR_4 < VAR_2->headoffset;
}
