
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt1 {int i2c_running; } ;


 int FUNC_0 (struct pt1*,int,int,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct pt1 *VAR_0, int *VAR_1)
{
 int VAR_2;
 VAR_2 = 0;

 FUNC_0(VAR_0, VAR_2, 0, 0, 1, 1, VAR_2 );
 VAR_2 = VAR_2 + 1;

 if (!VAR_0->i2c_running) {
  FUNC_0(VAR_0, VAR_2, 1, 0, 1, 1, VAR_2 + 1);
  FUNC_0(VAR_0, VAR_2 + 1, 1, 0, 1, 0, VAR_2 + 2);
  VAR_2 = VAR_2 + 2;
  VAR_0->i2c_running = 1;
 }
 *VAR_1 = VAR_2;
}
