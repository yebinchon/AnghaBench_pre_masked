
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcs_header {int dummy; } ;
struct lcs_cmd {int offset; scalar_t__ slot; int type; } ;
struct TYPE_2__ {int wait_q; } ;
struct lcs_card {TYPE_1__ write; } ;
struct lcs_buffer {int count; scalar_t__ data; int callback; } ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 struct lcs_buffer* FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static struct lcs_buffer *
FUNC_3(struct lcs_card *VAR_3, int VAR_4)
{
 struct lcs_buffer *VAR_5;
 struct lcs_cmd *VAR_6;

 FUNC_0(4, VAR_2, "getlncmd");

 FUNC_2(VAR_3->write.wait_q,
     ((VAR_5 = FUNC_1(&VAR_3->write)) != ((void*)0)));
 VAR_4 += sizeof(struct lcs_header);
 *(__u16 *)(VAR_5->data + VAR_4) = 0;
 VAR_5->count = VAR_4 + sizeof(__u16);
 VAR_5->callback = VAR_1;
 VAR_6 = (struct lcs_cmd *) VAR_5->data;
 VAR_6->offset = VAR_4;
 VAR_6->type = VAR_0;
 VAR_6->slot = 0;
 return VAR_5;
}
