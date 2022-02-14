
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct compressed_bio {int compress_type; } ;
struct TYPE_2__ {int (* decompress_bio ) (struct list_head*,struct compressed_bio*) ;} ;


 TYPE_1__** VAR_0 ;
 struct list_head* FUNC_0 (int,int ) ;
 int FUNC_1 (int,struct list_head*) ;
 int FUNC_2 (struct list_head*,struct compressed_bio*) ;

__attribute__((used)) static int FUNC_3(struct compressed_bio *VAR_1)
{
 struct list_head *VAR_2;
 int VAR_3;
 int VAR_4 = VAR_1->compress_type;

 VAR_2 = FUNC_0(VAR_4, 0);
 VAR_3 = VAR_0[VAR_4]->decompress_bio(VAR_2, VAR_1);
 FUNC_1(VAR_4, VAR_2);

 return VAR_3;
}
