
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_frame_meta_info {int magic_s; int magic_e; } ;



__attribute__((used)) static inline int FUNC_0(struct qtnf_frame_meta_info *VAR_0)
{
 return VAR_0->magic_s == 0xAB && VAR_0->magic_e == 0xBA;
}
