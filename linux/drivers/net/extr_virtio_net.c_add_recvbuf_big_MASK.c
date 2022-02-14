
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {scalar_t__ hdr_len; } ;
struct receive_queue {int * sg; int vq; } ;
struct page {unsigned long private; } ;
struct padded_vnet_hdr {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct page* FUNC_0 (struct receive_queue*,int ) ;
 int FUNC_1 (struct receive_queue*,struct page*) ;
 char* FUNC_2 (struct page*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 int FUNC_5 (int ,int *,int,struct page*,int ) ;

__attribute__((used)) static int FUNC_6(struct virtnet_info *VAR_3, struct receive_queue *VAR_4,
      gfp_t VAR_5)
{
 struct page *VAR_6, *VAR_7 = ((void*)0);
 char *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 FUNC_3(VAR_4->sg, VAR_1 + 2);


 for (VAR_9 = VAR_1 + 1; VAR_9 > 1; --VAR_9) {
  VAR_6 = FUNC_0(VAR_4, VAR_5);
  if (!VAR_6) {
   if (VAR_7)
    FUNC_1(VAR_4, VAR_7);
   return -VAR_0;
  }
  FUNC_4(&VAR_4->sg[VAR_9], FUNC_2(VAR_6), VAR_2);


  VAR_6->private = (unsigned long)VAR_7;
  VAR_7 = VAR_6;
 }

 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (!VAR_6) {
  FUNC_1(VAR_4, VAR_7);
  return -VAR_0;
 }
 VAR_8 = FUNC_2(VAR_6);



 FUNC_4(&VAR_4->sg[0], VAR_8, VAR_3->hdr_len);


 VAR_11 = sizeof(struct padded_vnet_hdr);
 FUNC_4(&VAR_4->sg[1], VAR_8 + VAR_11, VAR_2 - VAR_11);


 VAR_6->private = (unsigned long)VAR_7;
 VAR_10 = FUNC_5(VAR_4->vq, VAR_4->sg, VAR_1 + 2,
      VAR_6, VAR_5);
 if (VAR_10 < 0)
  FUNC_1(VAR_4, VAR_6);

 return VAR_10;
}
