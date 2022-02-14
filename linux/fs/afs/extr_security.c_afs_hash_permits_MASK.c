
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_permits {unsigned long nr_permits; unsigned long h; TYPE_1__* permits; } ;
struct TYPE_2__ {scalar_t__ access; scalar_t__ key; } ;



__attribute__((used)) static void FUNC_0(struct afs_permits *VAR_0)
{
 unsigned long VAR_1 = VAR_0->nr_permits;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_permits; VAR_2++) {
  VAR_1 += (unsigned long)VAR_0->permits[VAR_2].key / sizeof(void *);
  VAR_1 += VAR_0->permits[VAR_2].access;
 }

 VAR_0->h = VAR_1;
}
