
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int disk_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(char *VAR_1, struct gendisk *VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_1, VAR_2->disk_name, VAR_0);
 else
  FUNC_1(VAR_1, 0, VAR_0);
}
