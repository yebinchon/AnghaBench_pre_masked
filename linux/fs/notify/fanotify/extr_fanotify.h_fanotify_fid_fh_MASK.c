
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fanotify_fid {void* fh; void* ext_fh; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline void *FUNC_0(struct fanotify_fid *VAR_1,
        unsigned int VAR_2)
{
 return VAR_2 <= VAR_0 ? VAR_1->fh : VAR_1->ext_fh;
}
