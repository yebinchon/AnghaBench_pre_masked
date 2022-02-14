
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_hid {int bundle; int connection; } ;


 int FUNC_0 (int ,int,int *,int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gb_hid *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->bundle);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0->connection, VAR_1, ((void*)0), 0, ((void*)0), 0);

 FUNC_2(VAR_0->bundle);

 return VAR_2;
}
