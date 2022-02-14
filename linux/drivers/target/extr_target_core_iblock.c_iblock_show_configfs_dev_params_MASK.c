
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct iblock_dev {int ibd_flags; char* ibd_udev_path; int ibd_readonly; struct block_device* ibd_bd; } ;
struct block_device {struct iblock_dev* bd_holder; int bd_contains; int bd_dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct iblock_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (struct block_device*,char*) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_5(struct se_device *VAR_2, char *VAR_3)
{
 struct iblock_dev *VAR_4 = FUNC_0(VAR_2);
 struct block_device *VAR_5 = VAR_4->ibd_bd;
 char VAR_6[VAR_0];
 ssize_t VAR_7 = 0;

 if (VAR_5)
  VAR_7 += FUNC_4(VAR_3 + VAR_7, "iBlock device: %s",
    FUNC_3(VAR_5, VAR_6));
 if (VAR_4->ibd_flags & VAR_1)
  VAR_7 += FUNC_4(VAR_3 + VAR_7, "  UDEV PATH: %s",
    VAR_4->ibd_udev_path);
 VAR_7 += FUNC_4(VAR_3 + VAR_7, "  readonly: %d\n", VAR_4->ibd_readonly);

 VAR_7 += FUNC_4(VAR_3 + VAR_7, "        ");
 if (VAR_5) {
  VAR_7 += FUNC_4(VAR_3 + VAR_7, "Major: %d Minor: %d  %s\n",
   FUNC_1(VAR_5->bd_dev), FUNC_2(VAR_5->bd_dev), (!VAR_5->bd_contains) ?
   "" : (VAR_5->bd_holder == VAR_4) ?
   "CLAIMED: IBLOCK" : "CLAIMED: OS");
 } else {
  VAR_7 += FUNC_4(VAR_3 + VAR_7, "Major: 0 Minor: 0\n");
 }

 return VAR_7;
}
