
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {int finalize; int data; } ;
struct qeth_card {int write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_cmd_buffer*) ;
 int FUNC_1 (int ,void*,unsigned int) ;
 struct qeth_cmd_buffer* FUNC_2 (int *,unsigned int,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,unsigned int,int ) ;

__attribute__((used)) static struct qeth_cmd_buffer *FUNC_4(struct qeth_card *VAR_3,
        void *VAR_4,
        unsigned int VAR_5)
{
 struct qeth_cmd_buffer *VAR_6;

 VAR_6 = FUNC_2(&VAR_3->write, VAR_5, 1, VAR_1);
 if (!VAR_6)
  return ((void*)0);

 FUNC_1(VAR_6->data, VAR_4, VAR_5);
 FUNC_3(FUNC_0(VAR_6), VAR_0, 0, VAR_5,
         VAR_6->data);
 VAR_6->finalize = VAR_2;
 return VAR_6;
}
