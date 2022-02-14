
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_path {int* bc; scalar_t__ mod; } ;
struct pdcspath_entry {short ready; int rw_lock; struct device_path devpath; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,unsigned char) ;

__attribute__((used)) static ssize_t
FUNC_3(struct pdcspath_entry *VAR_2, char *VAR_3)
{
 char *VAR_4 = VAR_3;
 struct device_path *VAR_5;
 short VAR_6;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 FUNC_0(&VAR_2->rw_lock);
 VAR_5 = &VAR_2->devpath;
 VAR_6 = VAR_2->ready;
 FUNC_1(&VAR_2->rw_lock);

 if (!VAR_6)
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
  if (VAR_5->bc[VAR_6] >= 128)
   continue;
  VAR_4 += FUNC_2(VAR_4, "%u/", (unsigned char)VAR_5->bc[VAR_6]);
 }
 VAR_4 += FUNC_2(VAR_4, "%u\n", (unsigned char)VAR_5->mod);

 return VAR_4 - VAR_3;
}
