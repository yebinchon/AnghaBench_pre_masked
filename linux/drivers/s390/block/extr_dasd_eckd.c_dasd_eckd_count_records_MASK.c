
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eckd_count {int head; int record; } ;



__attribute__((used)) static int FUNC_0(struct eckd_count *VAR_0, int VAR_1,
       int VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = VAR_0[VAR_1].head;
 for (VAR_4 = VAR_1; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_4 > VAR_1) {
   if ((VAR_0[VAR_4].head == VAR_3 &&
       VAR_0[VAR_4].record == 1) ||
       VAR_0[VAR_4].head != VAR_3 ||
       VAR_0[VAR_4].record == 0)
    break;
  }
 }

 return VAR_4 - VAR_1;
}
