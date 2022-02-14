
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_io_bio {int * csum; int * csum_inline; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct btrfs_io_bio *VAR_0)
{
 if (VAR_0->csum != VAR_0->csum_inline) {
  FUNC_0(VAR_0->csum);
  VAR_0->csum = ((void*)0);
 }
}
