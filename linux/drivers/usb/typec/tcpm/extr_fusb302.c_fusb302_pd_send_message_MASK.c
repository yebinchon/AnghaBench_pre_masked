
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct pd_message {int header; int* payload; } ;
struct fusb302_chip {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct fusb302_chip*,int ,size_t,size_t*) ;
 int FUNC_1 (struct fusb302_chip*,char*,int) ;
 int FUNC_2 (size_t*,int*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct fusb302_chip *VAR_9,
       const struct pd_message *VAR_10)
{
 int VAR_11 = 0;
 u8 VAR_12[40];
 u8 VAR_13 = 0;
 int VAR_14;


 VAR_12[VAR_13++] = VAR_4;
 VAR_12[VAR_13++] = VAR_4;
 VAR_12[VAR_13++] = VAR_4;
 VAR_12[VAR_13++] = VAR_5;

 VAR_14 = FUNC_3(VAR_10->header) * 4;

 VAR_14 += 2;
 if (VAR_14 > 0x1F) {
  FUNC_1(VAR_9,
       "PD message too long %d (incl. header)", VAR_14);
  return -VAR_0;
 }

 VAR_12[VAR_13++] = VAR_3 | (VAR_14 & 0x1F);
 FUNC_2(&VAR_12[VAR_13], &VAR_10->header, sizeof(VAR_10->header));
 VAR_13 += sizeof(VAR_10->header);

 VAR_14 -= 2;
 FUNC_2(&VAR_12[VAR_13], VAR_10->payload, VAR_14);
 VAR_13 += VAR_14;


 VAR_12[VAR_13++] = VAR_2;

 VAR_12[VAR_13++] = VAR_1;

 VAR_12[VAR_13++] = VAR_6;

 VAR_12[VAR_13++] = VAR_7;

 VAR_11 = FUNC_0(VAR_9, VAR_8, VAR_13, VAR_12);
 if (VAR_11 < 0)
  return VAR_11;
 FUNC_1(VAR_9, "sending PD message header: %x", VAR_10->header);
 FUNC_1(VAR_9, "sending PD message len: %d", VAR_14);

 return VAR_11;
}
