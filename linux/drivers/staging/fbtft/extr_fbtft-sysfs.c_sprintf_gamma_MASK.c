
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int num_curves; unsigned int num_values; int lock; } ;
struct fbtft_par {TYPE_1__ gamma; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct fbtft_par *VAR_1, u32 *VAR_2, char *VAR_3)
{
 ssize_t VAR_4 = 0;
 unsigned int VAR_5, VAR_6;

 FUNC_0(&VAR_1->gamma.lock);
 for (VAR_5 = 0; VAR_5 < VAR_1->gamma.num_curves; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_1->gamma.num_values; VAR_6++)
   VAR_4 += FUNC_2(&VAR_3[VAR_4], VAR_0,
        "%04x ", VAR_2[VAR_5 * VAR_1->gamma.num_values + VAR_6]);
  VAR_3[VAR_4 - 1] = '\n';
 }
 FUNC_1(&VAR_1->gamma.lock);

 return VAR_4;
}
