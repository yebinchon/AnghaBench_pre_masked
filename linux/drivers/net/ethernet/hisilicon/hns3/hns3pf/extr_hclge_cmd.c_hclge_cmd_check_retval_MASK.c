
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int desc_num; struct hclge_desc* desc; } ;
struct TYPE_4__ {int last_status; TYPE_1__ csq; } ;
struct hclge_hw {TYPE_2__ cmq; } ;
struct hclge_desc {int retval; int opcode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct hclge_hw *VAR_0, struct hclge_desc *VAR_1,
      int VAR_2, int VAR_3)
{
 u16 VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_1[0].opcode);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_1[VAR_6] = VAR_0->cmq.csq.desc[VAR_3];
  VAR_3++;
  if (VAR_3 >= VAR_0->cmq.csq.desc_num)
   VAR_3 = 0;
 }
 if (FUNC_3(!FUNC_1(VAR_4)))
  VAR_5 = FUNC_2(VAR_1[VAR_2 - 1].retval);
 else
  VAR_5 = FUNC_2(VAR_1[0].retval);

 VAR_0->cmq.last_status = VAR_5;

 return FUNC_0(VAR_5);
}
