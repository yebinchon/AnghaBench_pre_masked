
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gds_vector {int length; } ;
struct gds_subvector {int length; } ;
struct evbuf_header {int length; } ;


 int FUNC_0 (scalar_t__*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (scalar_t__*,struct gds_vector*,size_t) ;
 int FUNC_2 (scalar_t__*,int ,int ) ;
 size_t FUNC_3 (int ,size_t) ;
 int FUNC_4 (int *) ;
 struct gds_vector* FUNC_5 (struct gds_vector*,void*,int) ;
 struct gds_vector* FUNC_6 (struct gds_vector*,void*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct evbuf_header *VAR_6)
{
 struct gds_vector *VAR_7;
 struct gds_subvector *VAR_8, *VAR_9, *VAR_10;
 size_t VAR_11;


 VAR_7 = FUNC_6(VAR_6 + 1, (void *) VAR_6 + VAR_6->length,
     0x9f00);
 if (!VAR_7)
  return;

 VAR_7 = FUNC_6(VAR_7 + 1, (void *) VAR_7 + VAR_7->length, 0x9f22);
 if (!VAR_7)
  return;

 VAR_8 = FUNC_5(VAR_7 + 1, (void *) VAR_7 + VAR_7->length, 0x81);
 if (!VAR_8)
  return;

 VAR_9 = FUNC_5(VAR_8 + 1, (void *) VAR_8 + VAR_8->length, 1);

 VAR_10 = FUNC_5(VAR_8 + 1, (void *) VAR_8 + VAR_8->length, 2);

 FUNC_7(&VAR_5);
 if (VAR_9) {
  VAR_11 = FUNC_3(VAR_1, (size_t) VAR_9->length);
  FUNC_1(VAR_3, VAR_9 + 1, VAR_11);
  FUNC_0(VAR_3, VAR_11);
  VAR_3[VAR_11] = 0;
 }
 if (VAR_10) {
  VAR_11 = FUNC_3(VAR_0, (size_t) VAR_10->length);
  FUNC_2(VAR_2, 0, VAR_0);
  FUNC_1(VAR_2, VAR_10 + 1, VAR_11);
 }
 FUNC_8(&VAR_5);
 FUNC_4(&VAR_4);
}
