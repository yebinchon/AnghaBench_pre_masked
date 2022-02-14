
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_report {int type; int id; } ;
struct gb_hid {int inbuf; int hid; } ;


 scalar_t__ FUNC_0 (struct gb_hid*,int ,int ,int ,unsigned int) ;
 unsigned int FUNC_1 (struct hid_report*) ;
 int FUNC_2 (int ,int ,int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_3(struct gb_hid *VAR_0, struct hid_report *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_0, VAR_1->type, VAR_1->id, VAR_0->inbuf,
         VAR_2))
  return;






 FUNC_2(VAR_0->hid, VAR_1->type, VAR_0->inbuf, VAR_2, 1);
}
