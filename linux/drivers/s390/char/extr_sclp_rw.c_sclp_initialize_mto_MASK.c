
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sclp_buffer {char* current_line; scalar_t__ current_length; struct msg_buf* current_msg; struct sccb_header* sccb; } ;
struct sccb_header {int length; } ;
struct mto {int length; int type; int line_type_flags; } ;
struct go {int length; int type; } ;
struct TYPE_4__ {int length; int type; int tag; int revision_code; } ;
struct mdb {struct mto mto; struct go go; TYPE_2__ header; } ;
struct TYPE_3__ {int length; int type; } ;
struct msg_buf {struct mdb mdb; TYPE_1__ header; } ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct msg_buf*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct sclp_buffer *VAR_4, int VAR_5)
{
 struct sccb_header *VAR_6;
 struct msg_buf *VAR_7;
 struct mdb *VAR_8;
 struct go *VAR_9;
 struct mto *VAR_10;
 int VAR_11;


 VAR_11 = sizeof(struct msg_buf) + VAR_5;


 VAR_6 = VAR_4->sccb;
 if ((VAR_3 - VAR_6->length) < VAR_11)
  return -VAR_0;

 VAR_7 = (struct msg_buf *)((addr_t) VAR_6 + VAR_6->length);
 FUNC_0(VAR_7, 0, sizeof(struct msg_buf));
 VAR_7->header.length = sizeof(struct msg_buf);
 VAR_7->header.type = VAR_1;

 VAR_8 = &VAR_7->mdb;
 VAR_8->header.length = sizeof(struct mdb);
 VAR_8->header.type = 1;
 VAR_8->header.tag = 0xD4C4C240;
 VAR_8->header.revision_code = 1;

 VAR_9 = &VAR_8->go;
 VAR_9->length = sizeof(struct go);
 VAR_9->type = 1;

 VAR_10 = &VAR_8->mto;
 VAR_10->length = sizeof(struct mto);
 VAR_10->type = 4;
 VAR_10->line_type_flags = VAR_2;


 VAR_4->current_msg = VAR_7;
 VAR_4->current_line = (char *) (VAR_10 + 1);
 VAR_4->current_length = 0;

 return 0;
}
