
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct hisi_hba* private; } ;
struct hisi_sas_iost_itct_cache {int* data; } ;
struct hisi_hba {scalar_t__ debugfs_itct_cache; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,int,int,int *) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_2, void *VAR_3)
{
 struct hisi_hba *VAR_4 = VAR_2->private;
 struct hisi_sas_iost_itct_cache *VAR_5 =
  (struct hisi_sas_iost_itct_cache *)VAR_4->debugfs_itct_cache;
 u32 VAR_6 = VAR_0 * 4;
 int VAR_7, VAR_8;
 __le64 *VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++, VAR_5++) {






  VAR_8 = VAR_5->data[1] & 0xffff;
  VAR_9 = (__le64 *)VAR_5;

  FUNC_0(VAR_2, VAR_8, VAR_6, VAR_9);
 }

 return 0;
}
