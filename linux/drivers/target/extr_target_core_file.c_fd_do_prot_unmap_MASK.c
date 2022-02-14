
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int se_dev; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,void*,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (void*,int,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct se_cmd *VAR_3, sector_t VAR_4, sector_t VAR_5)
{
 void *VAR_6;
 int VAR_7;

 VAR_6 = (void *)FUNC_0(VAR_1);
 if (!VAR_6) {
  FUNC_4("Unable to allocate FILEIO prot buf\n");
  return -VAR_0;
 }
 FUNC_3(VAR_6, 0xff, VAR_2);

 VAR_7 = FUNC_1(VAR_3->se_dev, VAR_4, VAR_5, VAR_6, VAR_2);

 FUNC_2((unsigned long)VAR_6);

 return VAR_7;
}
