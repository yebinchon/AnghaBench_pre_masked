
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; } ;
struct dbdma_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* VAR_3 ;
 int FUNC_0 (struct dbdma_cmd volatile*,int,int ,int ,int ) ;
 int FUNC_1 (unsigned char*) ;

__attribute__((used)) static void
FUNC_2(struct sk_buff *VAR_4, volatile struct dbdma_cmd *VAR_5)
{
 unsigned char *VAR_6 = VAR_4? VAR_4->data: VAR_3;

 FUNC_0(VAR_5, (VAR_0 | VAR_1), VAR_2,
       FUNC_1(VAR_6), 0);
}
