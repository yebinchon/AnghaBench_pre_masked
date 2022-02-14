
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {struct ubi_volume* vol; } ;
struct ubi_volume {int used_bytes; int ubi; scalar_t__ updating; } ;
struct file {struct ubi_volume_desc* private_data; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,int,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static loff_t FUNC_2(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct ubi_volume_desc *VAR_4 = VAR_1->private_data;
 struct ubi_volume *VAR_5 = VAR_4->vol;

 if (VAR_5->updating) {

  FUNC_1(VAR_5->ubi, "updating");
  return -VAR_0;
 }

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5->used_bytes);
}
