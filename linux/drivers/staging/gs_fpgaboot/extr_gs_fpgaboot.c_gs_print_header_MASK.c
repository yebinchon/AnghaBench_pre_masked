
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpgaimage {int lendata; int time; int date; int part; int filename; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct fpgaimage *VAR_0)
{
 FUNC_0("file: %s\n", VAR_0->filename);
 FUNC_0("part: %s\n", VAR_0->part);
 FUNC_0("date: %s\n", VAR_0->date);
 FUNC_0("time: %s\n", VAR_0->time);
 FUNC_0("lendata: %d\n", VAR_0->lendata);
}
