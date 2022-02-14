
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_connection {unsigned int reassembly_data_length; scalar_t__ transport_status; int wait_reassembly_queue; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (struct page*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*,struct page*,char*,unsigned int) ;
 int FUNC_3 (struct smbd_connection*,char*,unsigned int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct smbd_connection *VAR_2,
  struct page *VAR_3, unsigned int VAR_4,
  unsigned int VAR_5)
{
 int VAR_6;
 char *VAR_7;
 void *VAR_8;


 VAR_6 = FUNC_4(
  VAR_2->wait_reassembly_queue,
  VAR_2->reassembly_data_length >= VAR_5 ||
   VAR_2->transport_status != VAR_1);
 if (VAR_6)
  return VAR_6;


 VAR_8 = FUNC_0(VAR_3);
 VAR_7 = (char *) VAR_8 + VAR_4;

 FUNC_2(VAR_0, "reading from page=%p address=%p to_read=%d\n",
  VAR_3, VAR_7, VAR_5);

 VAR_6 = FUNC_3(VAR_2, VAR_7, VAR_5);
 FUNC_1(VAR_8);

 return VAR_6;
}
