
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_sb_info {int s_sb; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,char const*) ;

__attribute__((used)) static ssize_t FUNC_2(struct ext4_sb_info *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = VAR_4;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (VAR_5 && VAR_3[VAR_5-1] == '\n')
  VAR_5--;

 if (VAR_5)
  FUNC_1(VAR_2->s_sb, "%.*s", VAR_5, VAR_3);
 return VAR_4;
}
