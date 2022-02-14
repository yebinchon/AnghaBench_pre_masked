
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_page_desc {scalar_t__ offset; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct fuse_page_desc *VAR_1,
            unsigned int VAR_2,
            unsigned int VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_2; VAR_4 < VAR_2 + VAR_3; VAR_4++)
  VAR_1[VAR_4].length = VAR_0 - VAR_1[VAR_4].offset;
}
