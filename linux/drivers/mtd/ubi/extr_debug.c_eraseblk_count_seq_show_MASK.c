
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_wl_entry {int ec; } ;
struct ubi_device {int wl_lock; struct ubi_wl_entry** lookuptbl; } ;
struct seq_file {struct ubi_device* private; } ;


 void* VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int,int) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ubi_device*,int) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct ubi_device *VAR_3 = VAR_1->private;
 struct ubi_wl_entry *VAR_4;
 int *VAR_5 = VAR_2;
 int VAR_6 = -1;
 int VAR_7;


 if (VAR_2 == VAR_0) {
  FUNC_1(VAR_1,
    "physical_block_number\terase_count\tblock_status\tread_status\n");
  return 0;
 }

 VAR_7 = FUNC_4(VAR_3, *VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_3->wl_lock);

 VAR_4 = VAR_3->lookuptbl[*VAR_5];
 if (VAR_4)
  VAR_6 = VAR_4->ec;

 FUNC_3(&VAR_3->wl_lock);

 if (VAR_6 < 0)
  return 0;

 FUNC_0(VAR_1, "%-22d\t%-11d\n", *VAR_5, VAR_6);

 return 0;
}
