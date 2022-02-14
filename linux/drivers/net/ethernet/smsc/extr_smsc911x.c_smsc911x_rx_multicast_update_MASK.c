
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {unsigned int set_bits_mask; unsigned int clear_bits_mask; unsigned int hashhi; unsigned int hashlo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smsc911x_data*) ;
 int FUNC_1 (struct smsc911x_data*,int ,char*,unsigned int,unsigned int,unsigned int) ;
 int VAR_3 ;
 unsigned int FUNC_2 (struct smsc911x_data*,int ) ;
 int FUNC_3 (struct smsc911x_data*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct smsc911x_data *VAR_4)
{


 unsigned int VAR_5;

 FUNC_0(VAR_4);

 VAR_5 = FUNC_2(VAR_4, VAR_2);
 VAR_5 |= VAR_4->set_bits_mask;
 VAR_5 &= ~(VAR_4->clear_bits_mask);
 FUNC_3(VAR_4, VAR_2, VAR_5);
 FUNC_3(VAR_4, VAR_0, VAR_4->hashhi);
 FUNC_3(VAR_4, VAR_1, VAR_4->hashlo);
 FUNC_1(VAR_4, VAR_3, "maccr 0x%08X, HASHH 0x%08X, HASHL 0x%08X",
     VAR_5, VAR_4->hashhi, VAR_4->hashlo);
}
