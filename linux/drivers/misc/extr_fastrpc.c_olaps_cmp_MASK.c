
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fastrpc_buf_overlap {int end; int start; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 struct fastrpc_buf_overlap *VAR_2 = (struct fastrpc_buf_overlap *)VAR_0;
 struct fastrpc_buf_overlap *VAR_3 = (struct fastrpc_buf_overlap *)VAR_1;

 int VAR_4 = FUNC_0(VAR_2->start, VAR_3->start);

 int VAR_5 = FUNC_0(VAR_3->end, VAR_2->end);

 return VAR_4 == 0 ? VAR_5 : VAR_4;
}
