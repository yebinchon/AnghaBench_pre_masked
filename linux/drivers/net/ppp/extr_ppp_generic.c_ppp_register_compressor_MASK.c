
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressor_entry {int list; struct compressor* comp; } ;
struct compressor {int compress_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct compressor_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct compressor *VAR_5)
{
 struct compressor_entry *VAR_6;
 int VAR_7;
 FUNC_3(&VAR_4);
 VAR_7 = -VAR_0;
 if (FUNC_0(VAR_5->compress_proto))
  goto out;
 VAR_7 = -VAR_1;
 VAR_6 = FUNC_1(sizeof(struct compressor_entry), VAR_2);
 if (!VAR_6)
  goto out;
 VAR_7 = 0;
 VAR_6->comp = VAR_5;
 FUNC_2(&VAR_6->list, &VAR_3);
 out:
 FUNC_4(&VAR_4);
 return VAR_7;
}
