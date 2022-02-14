
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; } ;
typedef scalar_t__ ext4_lblk_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct ext4_extent*) ;
 scalar_t__ FUNC_3 (struct ext4_ext_path*) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static ext4_lblk_t FUNC_6(struct inode *VAR_1,
        struct ext4_ext_path *VAR_2,
        ext4_lblk_t *VAR_3)
{
 int VAR_4 = FUNC_4(VAR_1);
 struct ext4_extent *VAR_5;
 ext4_lblk_t VAR_6;

 VAR_5 = VAR_2[VAR_4].p_ext;
 if (VAR_5 == ((void*)0)) {

  *VAR_3 = 0;
  VAR_6 = VAR_0;
 } else if (*VAR_3 < FUNC_5(VAR_5->ee_block)) {
  VAR_6 = FUNC_5(VAR_5->ee_block) - *VAR_3;
 } else if (*VAR_3 >= FUNC_5(VAR_5->ee_block)
   + FUNC_2(VAR_5)) {
  ext4_lblk_t VAR_7;

  *VAR_3 = FUNC_5(VAR_5->ee_block) + FUNC_2(VAR_5);
  VAR_7 = FUNC_3(VAR_2);
  FUNC_1(VAR_7 == *VAR_3);
  VAR_6 = VAR_7 - *VAR_3;
 } else {
  FUNC_0();
 }
 return VAR_6;
}
